
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isoent {int dummy; } ;
struct idrent {int isoent; } ;
struct archive_rb_node {int dummy; } ;


 int FUNC_0 (struct isoent const*,int ) ;

__attribute__((used)) static int
FUNC_1(const struct archive_rb_node *VAR_0, const void *VAR_1)
{
 const struct isoent *VAR_2 = (const struct isoent *)VAR_1;
 const struct idrent *VAR_3 = (const struct idrent *)VAR_0;

 return (FUNC_0(VAR_2, VAR_3->isoent));
}
