
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
struct inotab {int t_size; int t_seekpt; } ;
typedef scalar_t__ ino_t ;
struct TYPE_5__ {int name; scalar_t__ ino; } ;
struct TYPE_4__ {int dd_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 TYPE_3__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*,...) ;
 struct inotab* FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*,int ,char*) ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (TYPE_1__*,int ,int ) ;
 int VAR_10 ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int,char*,int) ;

int
FUNC_13(char *VAR_11, ino_t VAR_12)
{
 struct inotab *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 char VAR_18[VAR_0];

 VAR_13 = FUNC_6(VAR_12);
 if (VAR_13 == ((void*)0))
  FUNC_8("Cannot find directory inode %ju named %s\n",
      (uintmax_t)VAR_12, VAR_11);
 if ((VAR_14 = FUNC_7(VAR_11, VAR_6 | VAR_4 | VAR_5, 0666)) < 0) {
  FUNC_5(VAR_10, "%s: ", VAR_11);
  (void) FUNC_4(VAR_10);
  FUNC_5(VAR_10, "cannot create file: %s\n", FUNC_11(VAR_9));
  return (VAR_1);
 }
 FUNC_10(VAR_8, VAR_13->t_seekpt, VAR_13->t_seekpt);
 VAR_15 = FUNC_3(VAR_8->dd_fd);
 for (VAR_16 = VAR_13->t_size; VAR_16 > 0; VAR_16 -= VAR_0) {
  VAR_17 = FUNC_0(VAR_16, VAR_0);
  if (FUNC_9(VAR_15, VAR_18, (int) VAR_17) == -1) {
   FUNC_5(VAR_10,
       "write error extracting inode %s, name %d\n",
       (uintmax_t)VAR_7.ino, VAR_7.name);
   FUNC_5(VAR_10, "read: %s\n", FUNC_11(VAR_9));
   FUNC_2(1);
  }
  if (!VAR_3 && FUNC_12(VAR_14, VAR_18, (int) VAR_17) == -1) {
   FUNC_5(VAR_10,
       "write error extracting inode %s, name %d\n",
       (uintmax_t)VAR_7.ino, VAR_7.name);
   FUNC_5(VAR_10, "write: %s\n", FUNC_11(VAR_9));
   FUNC_2(1);
  }
 }
 (void) FUNC_1(VAR_15);
 (void) FUNC_1(VAR_14);
 return (VAR_2);
}
