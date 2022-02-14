
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_info {int codec_caps; } ;
struct via_chinfo {struct via_info* parent; } ;
struct pcmchan_caps {int dummy; } ;
typedef int kobj_t ;


 int VAR_0 ;
 struct pcmchan_caps VAR_1 ;
 struct pcmchan_caps VAR_2 ;

__attribute__((used)) static struct pcmchan_caps *
FUNC_0(kobj_t VAR_3, void *VAR_4)
{
 struct via_chinfo *VAR_5 = VAR_4;
 struct via_info *VAR_6 = VAR_5->parent;

 return (VAR_6->codec_caps & VAR_0)? &VAR_2 : &VAR_1;
}
