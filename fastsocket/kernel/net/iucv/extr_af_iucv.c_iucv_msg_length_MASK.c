
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iucv_message {int flags; int* rmmsg; size_t length; } ;


 int VAR_0 ;

__attribute__((used)) static inline size_t FUNC_0(struct iucv_message *VAR_1)
{
 size_t VAR_2;

 if (VAR_1->flags & VAR_0) {
  VAR_2 = 0xff - VAR_1->rmmsg[7];
  return (VAR_2 < 8) ? VAR_2 : 8;
 }
 return VAR_1->length;
}
