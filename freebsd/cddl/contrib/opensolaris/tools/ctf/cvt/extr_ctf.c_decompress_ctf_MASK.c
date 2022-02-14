
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t avail_in; size_t avail_out; size_t total_out; int * next_in; int total_in; int * next_out; scalar_t__ opaque; scalar_t__ zfree; scalar_t__ zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef scalar_t__ voidpf ;
typedef scalar_t__ free_func ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ alloc_func ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,size_t,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static size_t
FUNC_6(caddr_t VAR_3, size_t VAR_4, caddr_t VAR_5, size_t VAR_6)
{
 z_stream VAR_7;
 int VAR_8;

 VAR_7.zalloc = (alloc_func)0;
 VAR_7.zfree = (free_func)0;
 VAR_7.opaque = (voidpf)0;

 VAR_7.next_in = (Bytef *)VAR_3;
 VAR_7.avail_in = VAR_4;
 VAR_7.next_out = (Bytef *)VAR_5;
 VAR_7.avail_out = VAR_6;

 if ((VAR_8 = FUNC_3(&VAR_7)) != VAR_1 ||
     (VAR_8 = FUNC_1(&VAR_7, VAR_0)) != VAR_2 ||
     (VAR_8 = FUNC_2(&VAR_7)) != VAR_1) {
  FUNC_4("CTF decompress zlib error %s\n", FUNC_5(VAR_8));
  return (0);
 }

 FUNC_0(3, "reflated %lu bytes to %lu, pointer at %d\n",
     VAR_7.total_in, VAR_7.total_out, (caddr_t)VAR_7.next_in - VAR_3);

 return (VAR_7.total_out);
}
