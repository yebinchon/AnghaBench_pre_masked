
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrset_cache {int table; } ;
struct config_file {size_t rrset_cache_slabs; size_t rrset_cache_size; } ;
struct alloc_cache {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (size_t,size_t,size_t,int ,int ,int ,int ,struct alloc_cache*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

struct rrset_cache* FUNC_2(struct config_file* VAR_8,
 struct alloc_cache* VAR_9)
{
 size_t VAR_10 = (VAR_8?VAR_8->rrset_cache_slabs:VAR_1);
 size_t VAR_11 = VAR_2;
 size_t VAR_12 = (VAR_8?VAR_8->rrset_cache_size:VAR_0);

 struct rrset_cache *VAR_13 = (struct rrset_cache*)FUNC_0(VAR_10,
  VAR_11, VAR_12, VAR_7, VAR_5,
  VAR_6, VAR_3, VAR_9);
 FUNC_1(&VAR_13->table, &VAR_4);
 return VAR_13;
}
