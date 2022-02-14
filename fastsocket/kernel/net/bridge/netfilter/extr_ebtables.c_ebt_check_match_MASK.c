
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_mtchk_param {int matchinfo; struct xt_match* match; struct ebt_entry* entryinfo; } ;
struct xt_match {int me; } ;
struct TYPE_2__ {struct xt_match* match; int name; } ;
struct ebt_entry_match {size_t match_size; int data; TYPE_1__ u; } ;
struct ebt_entry {int watchers_offset; int invflags; int ethproto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct xt_match*) ;
 int VAR_3 ;
 int FUNC_1 (struct xt_match*) ;
 int FUNC_2 (int ) ;
 struct xt_match* FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct xt_mtchk_param*,size_t,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static inline int
FUNC_6(struct ebt_entry_match *VAR_4, struct xt_mtchk_param *VAR_5,
  unsigned int *VAR_6)
{
 const struct ebt_entry *VAR_7 = VAR_5->entryinfo;
 struct xt_match *VAR_8;
 size_t VAR_9 = ((char *)VAR_7 + VAR_7->watchers_offset) - (char *)VAR_4;
 int VAR_10;

 if (VAR_9 < sizeof(struct ebt_entry_match) ||
     VAR_9 - sizeof(struct ebt_entry_match) < VAR_4->match_size)
  return -VAR_1;

 VAR_8 = FUNC_3(FUNC_5(VAR_3,
  VAR_4->u.name, 0), "ebt_%s", VAR_4->u.name);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 if (VAR_8 == ((void*)0))
  return -VAR_2;
 VAR_4->u.match = VAR_8;

 VAR_5->match = VAR_8;
 VAR_5->matchinfo = VAR_4->data;
 VAR_10 = FUNC_4(VAR_5, VAR_4->match_size,
       VAR_7->ethproto, VAR_7->invflags & VAR_0);
 if (VAR_10 < 0) {
  FUNC_2(VAR_8->me);
  return VAR_10;
 }

 (*VAR_6)++;
 return 0;
}
