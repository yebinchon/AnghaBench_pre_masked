
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int xport; } ;
typedef TYPE_1__ ocs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(ocs_t *VAR_2, char *VAR_3, char *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 if (FUNC_2(VAR_4, "offline") == 0) {
  FUNC_0(VAR_2, "Setting port to %s\n", VAR_4);
  VAR_6 = FUNC_3(VAR_2->xport, VAR_0);
  if (VAR_6 != 0) {
   FUNC_1(VAR_2, "Setting port to offline failed\n");
   VAR_5 = -1;
  }
 } else if (FUNC_2(VAR_4, "online") == 0) {
  FUNC_0(VAR_2, "Setting port to %s\n", VAR_4);
  VAR_6 = FUNC_3(VAR_2->xport, VAR_1);
  if (VAR_6 != 0) {
   FUNC_1(VAR_2, "Setting port to online failed\n");
   VAR_5 = -1;
  }
 } else {
  FUNC_1(VAR_2, "Unsupported link state \"%s\"\n", VAR_4);
  VAR_5 = -1;
 }

 return VAR_5;
}
