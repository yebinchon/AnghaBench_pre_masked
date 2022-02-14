
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileblocks {scalar_t__ fileposition; } ;
struct archive {int dummy; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct archive*,void*,scalar_t__,int ) ;

__attribute__((used)) static int64_t
FUNC_1(struct archive *VAR_1, void *VAR_2, int64_t VAR_3)
{
 struct fileblocks *VAR_4 = VAR_2;
 int64_t VAR_5 = VAR_4->fileposition;
 int64_t VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
 return (VAR_6 - VAR_5);
}
