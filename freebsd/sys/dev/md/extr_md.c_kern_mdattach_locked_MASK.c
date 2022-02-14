
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct md_s {int unit; unsigned int mediasize; unsigned int sectorsize; int type; int start; int label; } ;
struct md_req {unsigned int md_sectorsize; unsigned int md_mediasize; int md_options; int md_unit; int * md_label; int md_type; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 int FUNC_0 (int *,int ,int,int *) ;
 int VAR_8 ;
 int FUNC_1 (struct md_s*,struct md_req*) ;
 int FUNC_2 (struct md_s*,struct md_req*,struct thread*) ;
 int FUNC_3 (struct md_s*,struct md_req*,struct thread*) ;
 int FUNC_4 (struct md_s*,struct md_req*,struct thread*) ;
 int FUNC_5 (struct md_s*,struct thread*) ;
 int FUNC_6 (struct md_s*) ;
 struct md_s* FUNC_7 (int,int*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int
FUNC_9(struct thread *VAR_13, struct md_req *VAR_14)
{
 struct md_s *VAR_15;
 unsigned VAR_16;
 int VAR_17, VAR_18;

 FUNC_8(&VAR_8, VAR_7);

 switch (VAR_14->md_type) {
 case 132:
 case 130:
 case 128:
 case 129:
 case 131:
  break;
 default:
  return (VAR_2);
 }
 if (VAR_14->md_sectorsize == 0)
  VAR_16 = VAR_0;
 else
  VAR_16 = VAR_14->md_sectorsize;
 if (VAR_16 > VAR_5 || VAR_14->md_mediasize < VAR_16)
  return (VAR_2);
 if (VAR_14->md_options & VAR_6)
  VAR_15 = FUNC_7(-1, &VAR_17, VAR_14->md_type);
 else {
  if (VAR_14->md_unit > VAR_4)
   return (VAR_2);
  VAR_15 = FUNC_7(VAR_14->md_unit, &VAR_17, VAR_14->md_type);
 }
 if (VAR_15 == ((void*)0))
  return (VAR_17);
 if (VAR_14->md_label != ((void*)0))
  VAR_17 = FUNC_0(VAR_14->md_label, VAR_15->label,
      sizeof(VAR_15->label), ((void*)0));
 if (VAR_17 != 0)
  goto err_after_new;
 if (VAR_14->md_options & VAR_6)
  VAR_14->md_unit = VAR_15->unit;
 VAR_15->mediasize = VAR_14->md_mediasize;
 VAR_15->sectorsize = VAR_16;
 VAR_17 = VAR_1;
 switch (VAR_15->type) {
 case 132:
  VAR_15->start = VAR_9;
  VAR_17 = FUNC_1(VAR_15, VAR_14);
  break;
 case 130:





  VAR_17 = VAR_3;
  break;
 case 128:
  VAR_15->start = VAR_12;
  VAR_17 = FUNC_4(VAR_15, VAR_14, VAR_13);
  break;
 case 129:
  VAR_15->start = VAR_11;
  VAR_17 = FUNC_3(VAR_15, VAR_14, VAR_13);
  break;
 case 131:
  VAR_15->start = VAR_10;
  VAR_17 = FUNC_2(VAR_15, VAR_14, VAR_13);
  break;
 }
err_after_new:
 if (VAR_17 != 0) {
  FUNC_5(VAR_15, VAR_13);
  return (VAR_17);
 }


 VAR_18 = VAR_15->mediasize % VAR_15->sectorsize;
 VAR_15->mediasize -= VAR_18;

 FUNC_6(VAR_15);
 return (0);
}
