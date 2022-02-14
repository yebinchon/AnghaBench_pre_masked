
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpmtmr {int freq_sbt; scalar_t__ baseval; int baseuptime; } ;
struct vm {int dummy; } ;
struct bintime {int dummy; } ;


 int FUNC_0 (int ,struct bintime*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bintime) ;
 struct vpmtmr* FUNC_2 (int,int ,int) ;
 int FUNC_3 () ;

struct vpmtmr *
FUNC_4(struct vm *VAR_4)
{
 struct vpmtmr *VAR_5;
 struct bintime VAR_6;

 VAR_5 = FUNC_2(sizeof(struct vpmtmr), VAR_0, VAR_1 | VAR_2);
 VAR_5->baseuptime = FUNC_3();
 VAR_5->baseval = 0;

 FUNC_0(VAR_3, &VAR_6);
 VAR_5->freq_sbt = FUNC_1(VAR_6);

 return (VAR_5);
}
