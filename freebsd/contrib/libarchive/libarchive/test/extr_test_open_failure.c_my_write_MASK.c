
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_data {int write_return; int write_called; int magic; } ;
struct archive {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_1(struct archive *VAR_1, void *VAR_2, const void *VAR_3, size_t VAR_4)
{
 struct my_data *VAR_5 = (struct my_data *)VAR_2;
 (void)VAR_1;
 (void)VAR_3;
 (void)VAR_4;
 FUNC_0(VAR_0, VAR_5->magic);
 ++VAR_5->write_called;
 return (VAR_5->write_return);
}
