
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; } ;
struct key {scalar_t__ expiry; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct timespec FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *) ;

int FUNC_2(struct key *VAR_4)
{
 struct timespec VAR_5;
 int VAR_6 = 0;

 if (VAR_4) {

  VAR_6 = -VAR_1;
  if (FUNC_1(VAR_3, &VAR_4->flags) ||
      FUNC_1(VAR_2, &VAR_4->flags))
   goto error;


  VAR_6 = 0;
  if (VAR_4->expiry) {
   VAR_5 = FUNC_0();
   if (VAR_5.tv_sec >= VAR_4->expiry)
    VAR_6 = -VAR_0;
  }
 }

error:
 return VAR_6;
}
