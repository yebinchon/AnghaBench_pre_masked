
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdar {int dummy; } ;
struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (struct archive*) ;
 scalar_t__ FUNC_1 (struct archive*,void const*,size_t) ;
 int FUNC_2 (struct bsdar*,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3(struct bsdar *VAR_0, struct archive *VAR_1, const void *VAR_2, size_t VAR_3)
{
 if (FUNC_1(VAR_1, VAR_2, VAR_3) != (ssize_t)VAR_3)
  FUNC_2(VAR_0, 0, "%s", FUNC_0(VAR_1));
}
