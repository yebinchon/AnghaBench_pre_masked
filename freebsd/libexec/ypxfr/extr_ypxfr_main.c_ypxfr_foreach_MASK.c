
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; int size; } ;
typedef TYPE_1__ DBT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*,int ) ;

int
FUNC_1(int VAR_3, char *VAR_4, int VAR_5, char *VAR_6, int VAR_7,
    char *VAR_8)
{
 DBT VAR_9, VAR_10;

 if (VAR_3 != VAR_0)
  return (VAR_3);







 if (VAR_5) {
  VAR_9.data = VAR_4;
  VAR_9.size = VAR_5;
 } else {
  VAR_9.data = "";
  VAR_9.size = 1;
 }
 if (VAR_7) {
  VAR_10.data = VAR_6;
  VAR_10.size = VAR_7;
 } else {
  VAR_10.data = "";
  VAR_10.size = 1;
 }

 if (FUNC_0(VAR_1, &VAR_9, &VAR_10, 0) != VAR_0)
  return(VAR_2);

 return (0);
}
