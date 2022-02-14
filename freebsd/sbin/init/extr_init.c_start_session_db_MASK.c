
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* close ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int ,int ,int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(void)
{
 if (VAR_3 && (*VAR_3->close)(VAR_3))
  FUNC_1("session database close: %s", FUNC_2(VAR_2));
 if ((VAR_3 = FUNC_0(((void*)0), VAR_1, 0, VAR_0, ((void*)0))) == ((void*)0)) {
  FUNC_1("session database open: %s", FUNC_2(VAR_2));
  return (1);
 }
 return (0);

}
