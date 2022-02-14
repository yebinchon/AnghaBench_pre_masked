
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_size; int st_mode; } ;
struct TYPE_5__ {int fd; int size; scalar_t__ offset; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (char const*,int) ;
 scalar_t__ FUNC_6 (int,char const*,int ,int ) ;

FILE *
FUNC_7(const char *VAR_6, const char *VAR_7)
{
 struct stat VAR_8;
 int VAR_9, VAR_10, VAR_11;
 FILE *VAR_12;

 if (VAR_7 == ((void*)0))
  return ((void*)0);

 switch (*VAR_7++) {
 case 'r':
  VAR_10 = VAR_1;
  VAR_11 = 0;
  break;

 case 'w':
  VAR_10 = VAR_4;

  VAR_11 = VAR_0 | VAR_3;
  break;

 default:
  return (((void*)0));
 }

 if (*VAR_7 == '+')
  VAR_10 = VAR_2;

 VAR_9 = FUNC_5(VAR_6, VAR_10 | VAR_11);
 if (VAR_9 < 0)
  return ((void*)0);

 VAR_12 = FUNC_4(sizeof(FILE));
 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_9);
  return ((void*)0);
 }

 if (FUNC_3(VAR_9, &VAR_8) != 0) {
  FUNC_2(VAR_12);
  FUNC_1(VAR_9);
  return (((void*)0));
 }
 VAR_12->fd = VAR_9;
 VAR_12->offset = 0;
 VAR_12->size = VAR_8.st_size;

 return (VAR_12);
}
