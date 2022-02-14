
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* p; int (* c ) (struct snd_kcontrol*,int ,int,int*) ;} ;
struct snd_kcontrol {TYPE_1__ tlv; TYPE_2__* vd; } ;
typedef int mm_segment_t ;
typedef int _tlv ;
struct TYPE_4__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_kcontrol*,int ,int,int*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_3)
{
 int VAR_4[4];
 const int *VAR_5 = ((void*)0);
 int VAR_6 = -1;

 if (VAR_3->vd[0].access & VAR_0) {

  mm_segment_t VAR_7 = FUNC_1();
  FUNC_2(FUNC_0());
  if (!VAR_3->tlv.c(VAR_3, 0, sizeof(VAR_4), VAR_4))
   VAR_5 = VAR_4;
  FUNC_2(VAR_7);
 } else if (VAR_3->vd[0].access & VAR_1)
  VAR_5 = VAR_3->tlv.p;
 if (VAR_5 && VAR_5[0] == VAR_2)
  VAR_6 = -VAR_5[2] / VAR_5[3];
 return VAR_6;
}
