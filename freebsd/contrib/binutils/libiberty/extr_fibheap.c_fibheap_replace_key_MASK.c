
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* fibnode_t ;
typedef int fibheapkey_t ;
typedef int fibheap_t ;
struct TYPE_4__ {int key; int data; } ;


 int FUNC_0 (int ,TYPE_1__*,int,int ) ;

fibheapkey_t
FUNC_1 (fibheap_t VAR_0, fibnode_t VAR_1, fibheapkey_t VAR_2)
{
  int VAR_3 = VAR_1->key;
  FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_1->data);
  return VAR_3;
}
