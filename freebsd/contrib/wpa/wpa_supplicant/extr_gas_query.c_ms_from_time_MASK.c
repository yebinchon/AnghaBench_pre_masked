
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_reltime {int sec; int usec; } ;


 int FUNC_0 (struct os_reltime*) ;
 int FUNC_1 (struct os_reltime*,struct os_reltime*,struct os_reltime*) ;

__attribute__((used)) static int FUNC_2(struct os_reltime *VAR_0)
{
 struct os_reltime VAR_1, VAR_2;

 FUNC_0(&VAR_1);
 FUNC_1(&VAR_1, VAR_0, &VAR_2);
 return VAR_2.sec * 1000 + VAR_2.usec / 1000;
}
