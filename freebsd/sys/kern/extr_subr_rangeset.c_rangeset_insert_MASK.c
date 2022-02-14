
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct rs_el {void* re_start; void* re_end; } ;
struct rangeset {int rs_trie; } ;


 int FUNC_0 (int *,void**,int ) ;
 int FUNC_1 (struct rangeset*) ;
 int FUNC_2 (struct rangeset*,void*,void*) ;
 int VAR_0 ;

int
FUNC_3(struct rangeset *VAR_1, uint64_t VAR_2, uint64_t VAR_3,
    void *VAR_4)
{
 struct rs_el *VAR_5;
 int VAR_6;

 FUNC_1(VAR_1);
 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_5 = VAR_4;
 VAR_5->re_start = VAR_2;
 VAR_5->re_end = VAR_3;
 VAR_6 = FUNC_0(&VAR_1->rs_trie, &VAR_5->re_start, VAR_0);
 FUNC_1(VAR_1);
 return (VAR_6);
}
