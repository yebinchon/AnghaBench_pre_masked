
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_slicer {unsigned int nslice; void* slices; int * softc; } ;
struct g_slice {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned int,int) ;

__attribute__((used)) static struct g_slicer *
FUNC_1(unsigned VAR_2, unsigned VAR_3)
{
 struct g_slicer *VAR_4;

 VAR_4 = FUNC_0(sizeof *VAR_4, VAR_0 | VAR_1);
 if (VAR_3 > 0)
  VAR_4->softc = FUNC_0(VAR_3, VAR_0 | VAR_1);
 else
  VAR_4->softc = ((void*)0);
 VAR_4->slices = FUNC_0(VAR_2 * sizeof(struct g_slice),
     VAR_0 | VAR_1);
 VAR_4->nslice = VAR_2;
 return (VAR_4);
}
