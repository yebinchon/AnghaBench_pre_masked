
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_mount; } ;
struct indir {long in_lbn; int in_off; } ;
struct ext2mount {int dummy; } ;
typedef long int64_t ;
typedef long e2fs_lbn_t ;
typedef long daddr_t ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long FUNC_0 (struct ext2mount*) ;
 struct ext2mount* FUNC_1 (int ) ;

int
FUNC_2(struct vnode *VAR_3, daddr_t VAR_4, struct indir *VAR_5, int *VAR_6)
{
 long VAR_7;
 e2fs_lbn_t VAR_8, VAR_9;
 struct ext2mount *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int64_t VAR_14;

 VAR_10 = FUNC_1(VAR_3->v_mount);
 if (VAR_6)
  *VAR_6 = 0;
 VAR_12 = 0;
 VAR_9 = VAR_4;
 if ((long)VAR_4 < 0)
  VAR_4 = -(long)VAR_4;


 if (VAR_4 < VAR_1)
  return (0);







 for (VAR_7 = 1, VAR_11 = VAR_2, VAR_4 -= VAR_1; ;
     VAR_11--, VAR_4 -= VAR_7) {
  if (VAR_11 == 0)
   return (VAR_0);





  VAR_14 = (int64_t)VAR_7 * FUNC_0(VAR_10);
  if (VAR_4 < VAR_14)
   break;
  VAR_7 = VAR_14;
 }


 if (VAR_9 >= 0)
  VAR_8 = -(VAR_9 - VAR_4 + VAR_2 - VAR_11);
 else
  VAR_8 = -(-VAR_9 - VAR_4 + VAR_2 - VAR_11);







 VAR_5->in_lbn = VAR_8;
 VAR_5->in_off = VAR_13 = VAR_2 - VAR_11;
 VAR_5++;
 for (++VAR_12; VAR_11 <= VAR_2; VAR_11++) {

  if (VAR_8 == VAR_9)
   break;

  VAR_13 = (VAR_4 / VAR_7) % FUNC_0(VAR_10);

  ++VAR_12;
  VAR_5->in_lbn = VAR_8;
  VAR_5->in_off = VAR_13;
  ++VAR_5;

  VAR_8 -= -1 + VAR_13 * VAR_7;
  VAR_7 /= FUNC_0(VAR_10);
 }
 if (VAR_6)
  *VAR_6 = VAR_12;
 return (0);
}
