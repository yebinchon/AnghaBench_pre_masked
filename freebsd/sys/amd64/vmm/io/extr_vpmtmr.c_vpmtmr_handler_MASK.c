
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vpmtmr {int baseuptime; int freq_sbt; scalar_t__ baseval; } ;
struct vm {int dummy; } ;
typedef int sbintime_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 struct vpmtmr* FUNC_2 (struct vm*) ;

int
FUNC_3(struct vm *VAR_0, int VAR_1, bool VAR_2, int VAR_3, int VAR_4,
    uint32_t *VAR_5)
{
 struct vpmtmr *VAR_6;
 sbintime_t VAR_7, VAR_8;

 if (!VAR_2 || VAR_4 != 4)
  return (-1);

 VAR_6 = FUNC_2(VAR_0);





 VAR_7 = FUNC_1();
 VAR_8 = VAR_7 - VAR_6->baseuptime;
 FUNC_0(VAR_8 >= 0, ("vpmtmr_handler: uptime went backwards: "
     "%#lx to %#lx", VAR_6->baseuptime, VAR_7));
 *VAR_5 = VAR_6->baseval + VAR_8 / VAR_6->freq_sbt;

 return (0);
}
