
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct bhndb_intr_isrc {int dummy; } ;
struct bhndb_intr_handler {int ih_active; int * ih_cookiep; struct bhndb_intr_isrc* ih_isrc; struct resource* ih_res; int ih_owner; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bhndb_intr_handler* FUNC_0 (int,int ,int) ;

struct bhndb_intr_handler *
FUNC_1(device_t VAR_3, struct resource *VAR_4,
    struct bhndb_intr_isrc *VAR_5)
{
 struct bhndb_intr_handler *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0, VAR_1 | VAR_2);
 VAR_6->ih_owner = VAR_3;
 VAR_6->ih_res = VAR_4;
 VAR_6->ih_isrc = VAR_5;
 VAR_6->ih_cookiep = ((void*)0);
 VAR_6->ih_active = 0;

 return (VAR_6);
}
