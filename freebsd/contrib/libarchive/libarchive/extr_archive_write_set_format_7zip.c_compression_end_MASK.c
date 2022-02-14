
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct la_zstream {int (* end ) (struct archive*,struct la_zstream*) ;int * props; scalar_t__ prop_size; scalar_t__ valid; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct archive*,struct la_zstream*) ;

__attribute__((used)) static int
FUNC_2(struct archive *VAR_1, struct la_zstream *VAR_2)
{
 if (VAR_2->valid) {
  VAR_2->prop_size = 0;
  FUNC_0(VAR_2->props);
  VAR_2->props = ((void*)0);
  return (VAR_2->end(VAR_1, VAR_2));
 }
 return (VAR_0);
}
