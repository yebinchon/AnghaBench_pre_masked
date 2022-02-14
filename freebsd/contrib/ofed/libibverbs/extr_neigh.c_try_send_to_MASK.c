
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int s; } ;
struct skt {int len; TYPE_1__ sktaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,void*,size_t,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_3, void *VAR_4, size_t VAR_5,
         struct skt *VAR_6)
{
 uint64_t VAR_7 = VAR_1;
 int VAR_8;

 do {
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, 0,
        &VAR_6->sktaddr.s,
        VAR_6->len);
  if (VAR_8 > 0)
   VAR_8 = 0;
 } while (-1 == VAR_8 && VAR_0 == VAR_2 && --VAR_7);

 return VAR_8;
}
