
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpm {int dummy; } ;
struct archive_read_filter {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpm*) ;

__attribute__((used)) static int
FUNC_1(struct archive_read_filter *VAR_1)
{
 struct rpm *VAR_2;

 VAR_2 = (struct rpm *)VAR_1->data;
 FUNC_0(VAR_2);

 return (VAR_0);
}
