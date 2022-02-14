
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct ip_set {int family; struct bitmap_port* data; } ;
struct bitmap_port {int timeout; void* last_port; void* first_port; int members; int memsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(struct ip_set *VAR_2, struct bitmap_port *VAR_3,
       u16 VAR_4, u16 VAR_5)
{
 VAR_3->members = FUNC_0(VAR_3->memsize);
 if (!VAR_3->members)
  return 0;
 VAR_3->first_port = VAR_4;
 VAR_3->last_port = VAR_5;
 VAR_3->timeout = VAR_1;

 VAR_2->data = VAR_3;
 VAR_2->family = VAR_0;

 return 1;
}
