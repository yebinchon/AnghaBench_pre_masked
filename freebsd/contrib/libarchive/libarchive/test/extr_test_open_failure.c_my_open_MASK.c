
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_data {int open_return; int open_called; int magic; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct archive *VAR_1, void *VAR_2)
{
 struct my_data *VAR_3 = (struct my_data *)VAR_2;
 (void)VAR_1;
 FUNC_0(VAR_0, VAR_3->magic);
 ++VAR_3->open_called;
 return (VAR_3->open_return);
}
