
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ftpio {int dir; TYPE_1__* cconn; TYPE_1__* dconn; } ;
struct TYPE_4__ {int ref; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct ftpio*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_4)
{
 struct ftpio *VAR_5;
 int VAR_6;

 VAR_5 = (struct ftpio *)VAR_4;
 if (VAR_5 == ((void*)0)) {
  VAR_3 = VAR_0;
  return (-1);
 }
 if (VAR_5->dir == -1)
  return (0);
 if (VAR_5->cconn == ((void*)0) || VAR_5->dconn == ((void*)0)) {
  VAR_3 = VAR_0;
  return (-1);
 }
 FUNC_1(VAR_5->dconn);
 VAR_5->dir = -1;
 VAR_5->dconn = ((void*)0);
 FUNC_0("Waiting for final status\n");
 VAR_6 = FUNC_3(VAR_5->cconn);
 if (VAR_5->cconn == VAR_2 && VAR_5->cconn->ref == 1)
  VAR_2 = ((void*)0);
 FUNC_1(VAR_5->cconn);
 FUNC_2(VAR_5);
 return (VAR_6 == VAR_1) ? 0 : -1;
}
