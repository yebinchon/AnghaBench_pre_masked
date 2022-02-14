
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ng_pipe_hookcfg {int ber; int qin_size_limit; int qout_size_limit; int duplicate; int fifo; int wfq; int drr; int droptail; int drophead; int bandwidth; } ;
struct hookinfo {int* ber_p; int noqueue; } ;
typedef TYPE_1__* priv_p ;
struct TYPE_3__ {int delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int ) ;
 int* FUNC_1 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ng_pipe_hookcfg *VAR_4, struct ng_pipe_hookcfg *VAR_5,
 struct hookinfo *VAR_6, priv_p VAR_7)
{

 if (VAR_5->ber == -1) {
  VAR_4->ber = 0;
  if (VAR_6->ber_p) {
   FUNC_0(VAR_6->ber_p, VAR_2);
   VAR_6->ber_p = ((void*)0);
  }
 } else if (VAR_5->ber >= 1 && VAR_5->ber <= 1000000000000) {
  static const uint64_t VAR_8 = 0x1000000000000;
  uint64_t VAR_9, VAR_10;
  uint32_t VAR_11, VAR_12;

  if (VAR_6->ber_p == ((void*)0))
   VAR_6->ber_p =
       FUNC_1((VAR_0 + VAR_1) * sizeof(uint64_t),
       VAR_2, VAR_3);
  VAR_4->ber = VAR_5->ber;
  VAR_9 = VAR_8 - VAR_8 / VAR_5->ber;
  VAR_10 = VAR_8;
  for (VAR_11 = 0; VAR_11 < VAR_0 + VAR_1; VAR_11++) {
   VAR_6->ber_p[VAR_11] = VAR_10;
   for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
    VAR_10 = (VAR_10 * (VAR_9 & 0xffff) >> 48) +
        (VAR_10 * ((VAR_9 >> 16) & 0xffff) >> 32) +
        (VAR_10 * (VAR_9 >> 32) >> 16);
  }
 }

 if (VAR_5->qin_size_limit == -1)
  VAR_4->qin_size_limit = 0;
 else if (VAR_5->qin_size_limit >= 5)
  VAR_4->qin_size_limit = VAR_5->qin_size_limit;

 if (VAR_5->qout_size_limit == -1)
  VAR_4->qout_size_limit = 0;
 else if (VAR_5->qout_size_limit >= 5)
  VAR_4->qout_size_limit = VAR_5->qout_size_limit;

 if (VAR_5->duplicate == -1)
  VAR_4->duplicate = 0;
 else if (VAR_5->duplicate > 0 && VAR_5->duplicate <= 50)
  VAR_4->duplicate = VAR_5->duplicate;

 if (VAR_5->fifo) {
  VAR_4->fifo = 1;
  VAR_4->wfq = 0;
  VAR_4->drr = 0;
 }

 if (VAR_5->wfq) {
  VAR_4->fifo = 0;
  VAR_4->wfq = 1;
  VAR_4->drr = 0;
 }

 if (VAR_5->drr) {
  VAR_4->fifo = 0;
  VAR_4->wfq = 0;

  if (VAR_5->drr >= 32)
   VAR_4->drr = VAR_5->drr;
  else
   VAR_4->drr = 2048;
 }

 if (VAR_5->droptail) {
  VAR_4->droptail = 1;
  VAR_4->drophead = 0;
 }

 if (VAR_5->drophead) {
  VAR_4->droptail = 0;
  VAR_4->drophead = 1;
 }

 if (VAR_5->bandwidth == -1) {
  VAR_4->bandwidth = 0;
  VAR_4->fifo = 1;
  VAR_4->wfq = 0;
  VAR_4->drr = 0;
 } else if (VAR_5->bandwidth >= 100 && VAR_5->bandwidth <= 1000000000)
  VAR_4->bandwidth = VAR_5->bandwidth;

 if (VAR_4->bandwidth | VAR_7->delay |
     VAR_4->duplicate | VAR_4->ber)
  VAR_6->noqueue = 0;
 else
  VAR_6->noqueue = 1;
}
