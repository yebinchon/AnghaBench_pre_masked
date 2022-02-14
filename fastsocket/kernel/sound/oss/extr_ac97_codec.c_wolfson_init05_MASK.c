
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_codec {int (* codec_write ) (struct ac97_codec*,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ac97_codec*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ac97_codec * VAR_1)
{

 VAR_1->codec_write(VAR_1, VAR_0, 0x0808);
 return 0;
}
