
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xref ;
struct xrefinfo {scalar_t__ xref; scalar_t__ node; } ;
typedef scalar_t__ phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,struct xrefinfo*,int ) ;
 struct xrefinfo* FUNC_4 (int,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(phandle_t VAR_5)
{
 struct xrefinfo * VAR_6;
 phandle_t VAR_7, VAR_8;






 for (VAR_7 = FUNC_0(VAR_5); VAR_7 != 0; VAR_7 = FUNC_2(VAR_7)) {
  FUNC_5(VAR_7);
  if (FUNC_1(VAR_7, "phandle", &VAR_8, sizeof(VAR_8)) ==
      -1 && FUNC_1(VAR_7, "ibm,phandle", &VAR_8,
      sizeof(VAR_8)) == -1 && FUNC_1(VAR_7,
      "linux,phandle", &VAR_8, sizeof(VAR_8)) == -1)
   continue;
  VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_0, VAR_1 | VAR_2);
  VAR_6->node = VAR_7;
  VAR_6->xref = VAR_8;
  FUNC_3(&VAR_4, VAR_6, VAR_3);
 }
}
