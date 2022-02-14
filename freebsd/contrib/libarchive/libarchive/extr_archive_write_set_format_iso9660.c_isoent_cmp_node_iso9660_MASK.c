
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idrent {int isoent; } ;
struct archive_rb_node {int dummy; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const struct archive_rb_node *VAR_0,
    const struct archive_rb_node *VAR_1)
{
 const struct idrent *VAR_2 = (const struct idrent *)VAR_0;
 const struct idrent *VAR_3 = (const struct idrent *)VAR_1;

 return (FUNC_0(VAR_3->isoent, VAR_2->isoent));
}
