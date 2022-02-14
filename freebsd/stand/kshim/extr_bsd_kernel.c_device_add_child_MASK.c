
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_8__ {int dev_children; } ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,char const*) ;

device_t
FUNC_3(device_t VAR_1, const char *VAR_2, int VAR_3)
{
 device_t VAR_4;

 if (VAR_3 != -1) {
  FUNC_1(VAR_1, "Unit is not -1\n");
 }
 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_1, "Could not add child '%s'\n", VAR_2);
  goto done;
 }
 if (VAR_1 == ((void*)0)) {

  goto done;
 }
 FUNC_0(&VAR_1->dev_children, VAR_4, VAR_0);
done:
 return (VAR_4);
}
