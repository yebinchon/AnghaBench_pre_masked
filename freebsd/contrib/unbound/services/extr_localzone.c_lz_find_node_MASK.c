
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct local_zone {int data; } ;
struct TYPE_2__ {struct local_data* key; } ;
struct local_data {size_t namelen; int namelabs; TYPE_1__ node; int * name; } ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static struct local_data*
FUNC_1(struct local_zone* VAR_0, uint8_t* VAR_1, size_t VAR_2, int VAR_3)
{
 struct local_data VAR_4;
 VAR_4.node.key = &VAR_4;
 VAR_4.name = VAR_1;
 VAR_4.namelen = VAR_2;
 VAR_4.namelabs = VAR_3;
 return (struct local_data*)FUNC_0(&VAR_0->data, &VAR_4.node);
}
