
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aaci_stream {size_t codec_idx; size_t rate_idx; } ;
struct aaci {TYPE_2__* ac97_bus; } ;
struct TYPE_4__ {TYPE_1__** codec; } ;
struct TYPE_3__ {unsigned int* rates; } ;


 struct aaci_stream* VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct aaci *VAR_1, int VAR_2)
{
 struct aaci_stream *VAR_3 = VAR_0 + VAR_2;
 return VAR_1->ac97_bus->codec[VAR_3->codec_idx]->rates[VAR_3->rate_idx];
}
