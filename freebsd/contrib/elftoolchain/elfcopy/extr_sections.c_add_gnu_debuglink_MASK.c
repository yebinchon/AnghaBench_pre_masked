
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct sec_add {int size; int* content; int * name; } ;
struct elfcopy {scalar_t__ oed; int flags; int v_sadd; int * debuglink; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct sec_add*,int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int) ;
 int* FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (char*,int,int,int *) ;
 int FUNC_10 (char*) ;
 void* FUNC_11 (int) ;
 int FUNC_12 (scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_13 (int *,struct stat*) ;
 int * FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (char*) ;
 int FUNC_16 (int*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_17(struct elfcopy *VAR_4)
{
 struct sec_add *VAR_5;
 struct stat VAR_6;
 FILE *VAR_7;
 char *VAR_8, *VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_4->debuglink == ((void*)0))
  return;


 if ((VAR_5 = FUNC_11(sizeof(*VAR_5))) == ((void*)0))
  FUNC_4(VAR_1, "malloc failed");
 if ((VAR_5->name = FUNC_14(".gnu_debuglink")) == ((void*)0))
  FUNC_4(VAR_1, "strdup failed");
 if (FUNC_13(VAR_4->debuglink, &VAR_6) == -1)
  FUNC_4(VAR_1, "stat failed");
 if (VAR_6.st_size == 0)
  FUNC_5(VAR_1, "empty debug link target %s",
      VAR_4->debuglink);
 if ((VAR_9 = FUNC_11(VAR_6.st_size)) == ((void*)0))
  FUNC_4(VAR_1, "malloc failed");
 if ((VAR_7 = FUNC_8(VAR_4->debuglink, "r")) == ((void*)0))
  FUNC_4(VAR_1, "can not open %s", VAR_4->debuglink);
 if (FUNC_9(VAR_9, 1, VAR_6.st_size, VAR_7) == 0 ||
     FUNC_7(VAR_7))
  FUNC_4(VAR_1, "fread failed");
 FUNC_6(VAR_7);


 VAR_11 = FUNC_2(VAR_9, VAR_6.st_size, 0xFFFFFFFF);
 FUNC_10(VAR_9);


 if ((VAR_8 = FUNC_1(VAR_4->debuglink)) == ((void*)0))
  FUNC_4(VAR_1, "basename failed");
 VAR_10 = FUNC_12(FUNC_15(VAR_8) + 1, 4);
 VAR_5->size = VAR_10 + 4;


 if ((VAR_5->content = FUNC_3(1, VAR_5->size)) == ((void*)0))
  FUNC_4(VAR_1, "malloc failed");
 FUNC_16(VAR_5->content, VAR_8, FUNC_15(VAR_8));
 if (VAR_4->oed == VAR_0) {
  VAR_5->content[VAR_10] = VAR_11 & 0xFF;
  VAR_5->content[VAR_10 + 1] = (VAR_11 >> 8) & 0xFF;
  VAR_5->content[VAR_10 + 2] = (VAR_11 >> 16) & 0xFF;
  VAR_5->content[VAR_10 + 3] = VAR_11 >> 24;
 } else {
  VAR_5->content[VAR_10] = VAR_11 >> 24;
  VAR_5->content[VAR_10 + 1] = (VAR_11 >> 16) & 0xFF;
  VAR_5->content[VAR_10 + 2] = (VAR_11 >> 8) & 0xFF;
  VAR_5->content[VAR_10 + 3] = VAR_11 & 0xFF;
 }

 FUNC_0(&VAR_4->v_sadd, VAR_5, VAR_3);
 VAR_4->flags |= VAR_2;
}
