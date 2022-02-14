
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;
struct elfcopy {int v_arobj; int rela_off; int * eout; int * ein; } ;
struct ar_obj {char* buf; size_t size; int name; int * maddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct ar_obj*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct elfcopy*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct elfcopy*) ;
 int FUNC_4 (char**,int*) ;
 void* FUNC_5 (int,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (struct elfcopy*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int,struct stat*) ;
 scalar_t__ FUNC_14 (int,int ,int ) ;
 int * FUNC_15 (size_t) ;
 int VAR_8 ;
 scalar_t__ FUNC_16 (int,int *,size_t) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (char*) ;

__attribute__((used)) static void
FUNC_19(struct elfcopy *VAR_9, struct ar_obj *VAR_10)
{
 struct stat VAR_11;
 char *VAR_12;
 int VAR_13;


 FUNC_4(&VAR_12, &VAR_13);
 if ((VAR_9->eout = FUNC_5(VAR_13, VAR_2, ((void*)0))) == ((void*)0))
  FUNC_10(VAR_4, "elf_begin() failed: %s",
      FUNC_7(-1));
 FUNC_8(VAR_9->eout, VAR_1, VAR_3);
 FUNC_3(VAR_9);
 FUNC_6(VAR_9->ein);
 FUNC_6(VAR_9->eout);
 FUNC_12(VAR_10->buf);
 VAR_10->buf = ((void*)0);


 if (FUNC_14(VAR_13, 0, VAR_5) < 0)
  FUNC_9(VAR_4, "lseek failed for '%s'", VAR_12);
 if ((VAR_9->eout = FUNC_5(VAR_13, VAR_0, ((void*)0))) == ((void*)0))
  FUNC_10(VAR_4, "elf_begin() failed: %s",
      FUNC_7(-1));
 FUNC_11(VAR_9);
 FUNC_6(VAR_9->eout);

 if (FUNC_13(VAR_13, &VAR_11) == -1)
  FUNC_9(VAR_4, "fstat %s failed", VAR_12);
 if (FUNC_14(VAR_13, 0, VAR_5) < 0)
  FUNC_9(VAR_4, "lseek %s failed", VAR_12);
 VAR_10->size = VAR_11.st_size;
 if ((VAR_10->maddr = FUNC_15(VAR_10->size)) == ((void*)0))
  FUNC_9(VAR_4, "memory allocation failed for '%s'",
      VAR_12);
 if ((size_t) FUNC_16(VAR_13, VAR_10->maddr, VAR_10->size) != VAR_10->size)
  FUNC_9(VAR_4, "read failed for '%s'", VAR_12);
 if (FUNC_18(VAR_12))
  FUNC_9(VAR_4, "unlink %s failed", VAR_12);
 FUNC_12(VAR_12);
 FUNC_2(VAR_13);
 if (FUNC_17(VAR_10->name) > VAR_7)
  FUNC_1(VAR_9, VAR_10->name);
 VAR_9->rela_off += VAR_6 + VAR_10->size + VAR_10->size % 2;
 FUNC_0(&VAR_9->v_arobj, VAR_10, VAR_8);
}
