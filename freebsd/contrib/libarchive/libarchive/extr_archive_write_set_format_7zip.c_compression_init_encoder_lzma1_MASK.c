
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct la_zstream {scalar_t__ valid; } ;
struct archive {int dummy; } ;


 int FUNC_0 (struct archive*,struct la_zstream*) ;
 int FUNC_1 (struct archive*,struct la_zstream*,char*) ;

__attribute__((used)) static int
FUNC_2(struct archive *VAR_0,
    struct la_zstream *VAR_1, int VAR_2)
{

 (void) VAR_2;
 if (VAR_1->valid)
  FUNC_0(VAR_0, VAR_1);
 return (FUNC_1(VAR_0, VAR_1, "lzma"));
}
