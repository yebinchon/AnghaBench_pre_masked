
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct la_zstream {int valid; int end; int code; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,struct la_zstream*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct archive *VAR_3, struct la_zstream *VAR_4)
{

 if (VAR_4->valid)
  FUNC_0(VAR_3, VAR_4);
 VAR_4->valid = 1;
 VAR_4->code = VAR_1;
 VAR_4->end = VAR_2;
 return (VAR_0);
}
