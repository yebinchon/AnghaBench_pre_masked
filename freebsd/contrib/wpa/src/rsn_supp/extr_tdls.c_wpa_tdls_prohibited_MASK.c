
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_11_elems {int* ext_capab; } ;



__attribute__((used)) static int FUNC_0(struct ieee802_11_elems *VAR_0)
{

 return !!(VAR_0->ext_capab[4] & 0x40);
}
