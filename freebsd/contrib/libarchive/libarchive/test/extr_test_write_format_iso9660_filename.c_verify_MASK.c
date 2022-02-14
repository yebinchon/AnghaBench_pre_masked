
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fns {int alloc; scalar_t__ maxlen; scalar_t__ longest_len; int * names; scalar_t__ cnt; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*) ;
 struct archive* FUNC_7 () ;
 int FUNC_8 (struct archive*,struct archive_entry**) ;
 int FUNC_9 (struct archive*,unsigned char*,size_t) ;
 scalar_t__ FUNC_10 (struct archive*,int *,char*,int *) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (struct archive*,int ,int ) ;
 int FUNC_17 (char*,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int ,int) ;
 int FUNC_20 (struct archive*,int,struct fns*) ;

__attribute__((used)) static void
FUNC_21(unsigned char *VAR_3, size_t VAR_4, enum vtype VAR_5, struct fns *VAR_6)
{
 struct archive *VAR_7;
 struct archive_entry *VAR_8;
 size_t VAR_9;




 FUNC_13((VAR_7 = FUNC_7()) != ((void*)0));
 FUNC_16(VAR_7, 0, FUNC_12(VAR_7));
 FUNC_16(VAR_7, 0, FUNC_11(VAR_7));
 if (VAR_5 >= 1)
  FUNC_14(0 == FUNC_10(VAR_7, ((void*)0), "rockridge",
      ((void*)0)));
 if (VAR_5 >= 2)
  FUNC_14(0 == FUNC_10(VAR_7, ((void*)0), "joliet",
      ((void*)0)));
 FUNC_16(VAR_7, 0, FUNC_9(VAR_7, VAR_3, VAR_4));





 FUNC_16(VAR_7, 0, FUNC_8(VAR_7, &VAR_8));
 FUNC_15(FUNC_0(VAR_8), FUNC_1(VAR_8));
 FUNC_15(FUNC_0(VAR_8), FUNC_3(VAR_8));
 FUNC_17(".", FUNC_4(VAR_8));
 switch (VAR_5) {
 case 128:
  FUNC_13((VAR_2 | 0555) == FUNC_2(VAR_8));
  break;
 case 129:
  FUNC_13((VAR_2 | 0700) == FUNC_2(VAR_8));
  break;
 case 130:
  FUNC_13((VAR_2 | 0700) == FUNC_2(VAR_8));
  break;
 }




 FUNC_19(VAR_6->names, 0, sizeof(char *) * VAR_6->alloc);
 VAR_6->cnt = 0;
 for (VAR_9 = 0; VAR_9 < VAR_6->alloc; VAR_9++)
  FUNC_20(VAR_7, VAR_5, VAR_6);
 for (VAR_9 = 0; VAR_9 < VAR_6->alloc; VAR_9++)
  FUNC_18(VAR_6->names[VAR_9]);
 FUNC_15((int)VAR_6->longest_len, (int)VAR_6->maxlen);




 FUNC_16(VAR_7, VAR_0, FUNC_8(VAR_7, &VAR_8));
 FUNC_16(VAR_7, VAR_1, FUNC_5(VAR_7));
 FUNC_16(VAR_7, VAR_1, FUNC_6(VAR_7));
}
