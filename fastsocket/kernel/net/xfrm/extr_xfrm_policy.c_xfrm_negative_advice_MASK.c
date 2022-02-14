
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_entry {scalar_t__ obsolete; } ;


 int FUNC_0 (struct dst_entry*) ;

__attribute__((used)) static struct dst_entry *FUNC_1(struct dst_entry *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->obsolete) {
   FUNC_0(VAR_0);
   VAR_0 = ((void*)0);
  }
 }
 return VAR_0;
}
