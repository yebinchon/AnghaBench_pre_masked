
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct dso_cache {scalar_t__ data; scalar_t__ size; scalar_t__ offset; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_2(struct dso_cache *VAR_0, u64 VAR_1,
    u8 *VAR_2, u64 VAR_3)
{
 u64 VAR_4 = VAR_1 - VAR_0->offset;
 u64 VAR_5 = FUNC_1(VAR_0->size - VAR_4, VAR_3);

 FUNC_0(VAR_2, VAR_0->data + VAR_4, VAR_5);
 return VAR_5;
}
