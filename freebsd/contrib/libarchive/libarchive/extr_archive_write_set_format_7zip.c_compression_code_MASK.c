
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct la_zstream {int (* code ) (struct archive*,struct la_zstream*,int) ;scalar_t__ valid; } ;
struct archive {int dummy; } ;
typedef enum la_zaction { ____Placeholder_la_zaction } la_zaction ;


 int VAR_0 ;
 int FUNC_0 (struct archive*,struct la_zstream*,int) ;

__attribute__((used)) static int
FUNC_1(struct archive *VAR_1, struct la_zstream *VAR_2,
    enum la_zaction VAR_3)
{
 if (VAR_2->valid)
  return (VAR_2->code(VAR_1, VAR_2, VAR_3));
 return (VAR_0);
}
