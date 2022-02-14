
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct interface {struct auth* int_auth; } ;
struct auth {scalar_t__ type; scalar_t__ end; scalar_t__ start; } ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

struct auth *
FUNC_0(struct interface *VAR_3)
{
 struct auth *VAR_4, *VAR_5;
 int VAR_6;


 if (VAR_3 == ((void*)0))
  return 0;

 VAR_5 = ((void*)0);
 VAR_4 = VAR_3->int_auth;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++, VAR_4++) {

  if (VAR_4->type == VAR_1)
   break;


  if ((u_long)VAR_4->start > (u_long)VAR_2.tv_sec)
   continue;

  if ((u_long)VAR_4->end < (u_long)VAR_2.tv_sec) {

   if (VAR_5 == ((void*)0) || (u_long)VAR_4->end > (u_long)VAR_5->end)
    VAR_5 = VAR_4;
   continue;
  }


  if (VAR_5 == ((void*)0) || (u_long)VAR_5->end < (u_long)VAR_4->end)
   VAR_5 = VAR_4;
 }
 return VAR_5;
}
