
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* prefix_cmd ) (int,unsigned char) ;} ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int,unsigned char) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, unsigned char VAR_2)
{
 if ((char *) VAR_0[VAR_1]->prefix_cmd == ((void*)0))
  return 1;

 return VAR_0[VAR_1]->prefix_cmd(VAR_1, VAR_2);
}
