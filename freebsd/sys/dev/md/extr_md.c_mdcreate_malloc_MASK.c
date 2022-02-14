
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_s {scalar_t__ fwsectors; scalar_t__ fwheads; int flags; int mediasize; int sectorsize; int indir; int uma; int name; } ;
struct md_req {int md_options; scalar_t__ md_sectorsize; scalar_t__ md_fwsectors; scalar_t__ md_fwheads; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,uintptr_t) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int *,int *,int *,int *,int,int ) ;

__attribute__((used)) static int
FUNC_5(struct md_s *VAR_10, struct md_req *VAR_11)
{
 uintptr_t VAR_12;
 int VAR_13;
 off_t VAR_14;

 VAR_13 = 0;
 if (VAR_11->md_options & ~(VAR_2 | VAR_3 | VAR_5))
  return (VAR_0);
 if (VAR_11->md_sectorsize != 0 && !FUNC_1(VAR_11->md_sectorsize))
  return (VAR_0);

 if (VAR_11->md_options & VAR_5)
  VAR_11->md_options &= ~VAR_3;
 if (VAR_11->md_fwsectors != 0)
  VAR_10->fwsectors = VAR_11->md_fwsectors;
 if (VAR_11->md_fwheads != 0)
  VAR_10->fwheads = VAR_11->md_fwheads;
 VAR_10->flags = VAR_11->md_options & (VAR_3 | VAR_4);
 VAR_10->indir = FUNC_0(VAR_10->mediasize / VAR_10->sectorsize);
 VAR_10->uma = FUNC_4(VAR_10->name, VAR_10->sectorsize, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     0x1ff, 0);
 if (VAR_11->md_options & VAR_5) {
  off_t VAR_15;

  VAR_15 = VAR_10->mediasize / VAR_10->sectorsize;
  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
   VAR_12 = (uintptr_t)FUNC_3(VAR_10->uma, (VAR_9 ?
       VAR_7 : VAR_6) | VAR_8);
   if (VAR_12 != 0)
    VAR_13 = FUNC_2(VAR_10->indir, VAR_14, VAR_12);
   else
    VAR_13 = VAR_1;
   if (VAR_13 != 0)
    break;
  }
 }
 return (VAR_13);
}
