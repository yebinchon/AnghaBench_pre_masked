
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct kerneldumpheader {int dumpextent; } ;
struct kerneldumpcrypto {void* kdc_dumpkey; } ;
struct dumperinfo {size_t blocksize; int (* dumper_hdr ) (struct dumperinfo*,struct kerneldumpheader*,void*,int) ;size_t mediaoffset; size_t mediasize; void* blockbuf; struct kerneldumpcrypto* kdcrypto; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dumperinfo*,void*,int ,int,int) ;
 int FUNC_2 (struct kerneldumpcrypto*) ;
 int FUNC_3 (void*,struct kerneldumpheader*,size_t) ;
 int FUNC_4 (void*,int ,size_t) ;
 int FUNC_5 (struct dumperinfo*,struct kerneldumpheader*,void*,int) ;

__attribute__((used)) static int
FUNC_6(struct dumperinfo *VAR_1, struct kerneldumpheader *VAR_2)
{



 void *VAR_3, *VAR_4;
 size_t VAR_5;
 uint64_t VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 VAR_5 = sizeof(*VAR_2);
 if (VAR_5 > VAR_1->blocksize)
  return (VAR_0);






 VAR_4 = ((void*)0);
 VAR_7 = 0;






 if (VAR_1->dumper_hdr != ((void*)0))
  return (VAR_1->dumper_hdr(VAR_1, VAR_2, VAR_4, VAR_7));

 if (VAR_5 == VAR_1->blocksize)
  VAR_3 = VAR_2;
 else {
  VAR_3 = VAR_1->blockbuf;
  FUNC_4(VAR_3, 0, VAR_1->blocksize);
  FUNC_3(VAR_3, VAR_2, VAR_5);
 }

 VAR_6 = FUNC_0(VAR_2->dumpextent);
 VAR_8 = FUNC_1(VAR_1, VAR_3, 0,
     VAR_1->mediaoffset + VAR_1->mediasize - 2 * VAR_1->blocksize - VAR_6 -
     VAR_7, VAR_1->blocksize);
 if (VAR_8 == 0)
  VAR_8 = FUNC_1(VAR_1, VAR_3, 0, VAR_1->mediaoffset + VAR_1->mediasize -
      VAR_1->blocksize, VAR_1->blocksize);
 return (VAR_8);
}
