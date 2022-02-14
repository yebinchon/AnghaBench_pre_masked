
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int start; int size; } ;
struct zfsdsk {TYPE_1__ dsk; int * gdev; } ;
typedef int off_t ;
typedef int daddr_t ;
struct TYPE_4__ {scalar_t__ rdbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,int,unsigned int) ;
 scalar_t__ FUNC_1 (int *,int,scalar_t__,unsigned int) ;
 int FUNC_2 (char*,scalar_t__,unsigned int) ;
 int FUNC_3 (char*,int,unsigned int,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static int
FUNC_6(void *VAR_4, void *VAR_5, off_t VAR_6, void *VAR_7, size_t VAR_8)
{
 char *VAR_9;
 daddr_t VAR_10, VAR_11;
 off_t VAR_12;
 unsigned int VAR_13, VAR_14;
 struct zfsdsk *VAR_15 = (struct zfsdsk *) VAR_5;

 if ((VAR_6 & (VAR_0 - 1)) || (VAR_8 & (VAR_0 - 1)))
  return -1;

 VAR_9 = VAR_7;
 VAR_10 = VAR_6 / VAR_0;
 VAR_10 += VAR_15->dsk.start;




 VAR_11 = FUNC_4(VAR_6, VAR_1) / VAR_0;




 VAR_11 += VAR_15->dsk.start;
 VAR_12 = (VAR_10 - VAR_11) * VAR_0;

 while (VAR_8 > 0) {
  VAR_13 = VAR_8 / VAR_0;




  if (VAR_13 > (VAR_2 - VAR_12) / VAR_0)
   VAR_13 = (VAR_2 - VAR_12) / VAR_0;




  VAR_14 = FUNC_5(VAR_13 * VAR_0 + VAR_12, VAR_1)
      / VAR_0;

  if (VAR_15->dsk.size > 0 && VAR_11 + VAR_14 >
      VAR_15->dsk.size + VAR_15->dsk.start) {
   FUNC_3("Shortening read at %lld from %d to %lld\n",
       VAR_11, VAR_14,
       (VAR_15->dsk.size + VAR_15->dsk.start) - VAR_11);
   VAR_14 = (VAR_15->dsk.size + VAR_15->dsk.start) - VAR_11;
  }

  if (FUNC_0(&VAR_15->dsk, VAR_3->rdbuf, VAR_11, VAR_14))
   return -1;
  FUNC_2(VAR_9, VAR_3->rdbuf + VAR_12, VAR_13 * VAR_0);
  VAR_9 += VAR_13 * VAR_0;
  VAR_10 += VAR_13;
  VAR_11 += VAR_14;
  VAR_8 -= VAR_13 * VAR_0;

  VAR_12 = 0;
 }

 return 0;
}
