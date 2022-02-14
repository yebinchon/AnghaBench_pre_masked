
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xrefinfo {int dev; void* xref; void* node; } ;
typedef void* phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct xrefinfo*,int ) ;
 struct xrefinfo* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct xrefinfo *
FUNC_4(phandle_t VAR_5, phandle_t VAR_6, device_t VAR_7)
{
 struct xrefinfo *VAR_8;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_0, VAR_1);
 VAR_8->node = VAR_5;
 VAR_8->xref = VAR_6;
 VAR_8->dev = VAR_7;
 FUNC_2(&VAR_4);
 FUNC_0(&VAR_3, VAR_8, VAR_2);
 FUNC_3(&VAR_4);
 return (VAR_8);
}
