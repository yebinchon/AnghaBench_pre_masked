
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct kerneldumpheader {int dumpextent; } ;
struct dumperinfo {int (* dumper_start ) (struct dumperinfo*) ;int blocksize; scalar_t__ mediasize; scalar_t__ mediaoffset; scalar_t__ dumpoff; scalar_t__ origdumpoff; int * kdcomp; int kdcrypto; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dumperinfo*) ;

int
FUNC_5(struct dumperinfo *VAR_2, struct kerneldumpheader *VAR_3)
{
 uint64_t VAR_4, VAR_5;
 uint32_t VAR_6;
 int VAR_7;







 VAR_7 = 0;
 VAR_6 = 0;


 if (VAR_2->dumper_start != ((void*)0)) {
  VAR_7 = VAR_2->dumper_start(VAR_2);
 } else {
  VAR_4 = FUNC_0(VAR_3->dumpextent);
  VAR_5 = VAR_1 + VAR_4 + 2 * VAR_2->blocksize +
      VAR_6;
  if (VAR_2->mediasize < VAR_5) {
   if (VAR_2->kdcomp == ((void*)0))
    return (VAR_0);
   VAR_4 = VAR_2->mediasize - VAR_5 + VAR_4;
   VAR_3->dumpextent = FUNC_1(VAR_4);
  }




  VAR_2->dumpoff = VAR_2->mediaoffset + VAR_2->mediasize - VAR_2->blocksize -
      VAR_4;
 }
 VAR_2->origdumpoff = VAR_2->dumpoff;
 return (VAR_7);
}
