
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct note_info_list {int dummy; } ;
struct note_info {int type; size_t outsize; void* outarg; int (* outfunc ) (void*,int *,size_t*) ;} ;
typedef int (* outfunc_t ) (void*,int *,size_t*) ;
typedef int FREEBSD_ABI_VENDOR ;
typedef int Elf_Note ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct note_info_list*,struct note_info*,int ) ;
 int VAR_4 ;
 struct note_info* FUNC_1 (int,int ,int) ;
 int FUNC_2 (size_t,int ) ;

__attribute__((used)) static size_t
FUNC_3(struct note_info_list *VAR_5, int VAR_6, outfunc_t VAR_7, void *VAR_8)
{
 struct note_info *VAR_9;
 size_t VAR_10, VAR_11;

 VAR_10 = 0;
 VAR_7(VAR_8, ((void*)0), &VAR_10);
 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_1, VAR_3 | VAR_2);
 VAR_9->type = VAR_6;
 VAR_9->outfunc = VAR_7;
 VAR_9->outarg = VAR_8;
 VAR_9->outsize = VAR_10;
 FUNC_0(VAR_5, VAR_9, VAR_4);

 if (VAR_6 == -1)
  return (VAR_10);

 VAR_11 = sizeof(Elf_Note) +
     FUNC_2(sizeof(FREEBSD_ABI_VENDOR), VAR_0) +

     FUNC_2(VAR_10, VAR_0);

 return (VAR_11);
}
